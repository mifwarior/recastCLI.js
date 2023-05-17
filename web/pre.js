window["createNavMeshBuilder"] = function createNavMeshBuilder() {
    var Module = {};
    Module.postRun = [];
    var promise = new Promise(resolve => Module.postRun.push(resolve));
