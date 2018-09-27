#define CATCH_CONFIG_MAIN
#include "stack.hpp"
#include "catch.hpp"

TEST_CASE("A new stack is empty", "[stack]") {
    stack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("A new stack is full", "[stack]") {
    stack tester;

    REQUIRE(tester.full() == false);
    REQUIRE(tester.push(0) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(5) == true);
    REQUIRE(tester.push(6) == true);
    REQUIRE(tester.push(7) == true);
    REQUIRE(tester.push(8) == true);
    REQUIRE(tester.push(9) == true);
    REQUIRE(tester.full() == true);


}

TEST_CASE("Pushing to stack", "[stack]") {
    stack tester;

    REQUIRE(tester.push(0) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(5) == true);
    REQUIRE(tester.push(6) == true);
    REQUIRE(tester.push(7) == true);
    REQUIRE(tester.push(8) == true);
    REQUIRE(tester.push(9) == true);
    REQUIRE(tester.push(10) == false);
    (tester.print());

}


TEST_CASE("Returning top of stack", "[stack]") {
    stack tester;

    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(5) == true);
    REQUIRE(tester.push(6) == true);
    REQUIRE(tester.push(7) == true);
    REQUIRE(tester.top() == 7);
    std::cout << tester.top() << std::endl;
    (tester.print());
}

TEST_CASE("Popping from stack", "[stack]") {
    stack tester;

    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    (tester.pop());
    (tester.pop());
    (tester.pop());
    (tester.pop());
    (tester.pop());
    (tester.print());

}

TEST_CASE("Printing stack", "[stack]") {
    stack tester;

    (tester.print());
}