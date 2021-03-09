function sumWeight(arr) {
  let total = 0;
  arr.forEach((val) => {
    total += val;
  });
  return total;
}

function solution(bridge_length, weight, truck_weights) {
  let timer = 0;
  let onBridge = [];
  let leaveTimes = [];

  while (truck_weights.length > 0 || onBridge.length > 0) {
    if (leaveTimes[0] === timer) {
      leaveTimes.shift();
      onBridge.shift();
    }

    if (sumWeight(onBridge) + truck_weights[0] <= weight) {
      onBridge.push(truck_weights.shift());
      leaveTimes.push(timer + bridge_length);
    }
    timer++;
  }

  return timer;
}
