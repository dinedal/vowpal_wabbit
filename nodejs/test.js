var vowpalwabbit = require("./build/Release/vowpal-wabbit.node");


exports.testSomething = function(test) {
  test.expect(1);
  test.ok(vowpalwabbit.vowpal_wabbit() == "hello world!", "this assertion should pass");
  test.done();
};


exports.testInit = function(test) {
  test.expect(1);
  test.ok(vowpalwabbit.init());
  test.done();
}