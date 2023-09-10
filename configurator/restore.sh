#!/bin/bash

C=./configurator
$C erase # first, empty the blackbox

# battery
$C set 4 1 840
$C set 4 2 3
# motors
$C set 3 1 4
$C set 3 2 2
$C set 3 3 1
$C set 3 4 3
# rates
$C set 2 1 667
$C set 2 2 667
$C set 2 3 25
$C set 2 4 30
$C set 2 6 100
# tune
$C set 1 1 180
$C set 1 2 120
$C set 1 3 40
$C set 1 4 230
$C set 1 5 230

$C save
$C get # print to confirm
