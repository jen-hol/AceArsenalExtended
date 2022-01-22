@echo off

SETLOCAL ENABLEDELAYEDEXPANSION

       :: DEFINE the following variables where applicable to your install

    SET SOURCE=%~dp0


:: _________________________________________________________

if not exist p:\ GOTO noP

echo This program will create all necessary links to your P drive. Press enter to continue.
pause

if not exist "P:\z\aceax\compats" mkdir P:\z\aceax\compats
mklink /J "P:\z\aceax\compats\compat_cup_weapons" "%SOURCE%compats\compat_cup_weapons"
mklink /J "P:\z\aceax\compats\compat_amf" "%SOURCE%compats\compat_amf"
mklink /J "P:\z\aceax\compats\compat_usp" "%SOURCE%compats\compat_usp"

if not exist "P:\z\aceax\addons" mkdir P:\z\aceax\addons
mklink /J "P:\z\aceax\addons\arsenal" "%SOURCE%addons\arsenal"
mklink /J "P:\z\aceax\addons\data_tier1" "%SOURCE%addons\data_tier1"
mklink /J "P:\z\aceax\addons\gearinfo" "%SOURCE%addons\gearinfo"
mklink /J "P:\z\aceax\addons\ingame" "%SOURCE%addons\ingame"
mklink /J "P:\z\aceax\addons\main" "%SOURCE%addons\main"

echo Complete
pause
GOTO quit

:noP
echo You don't have a P: drive!

:quit
exit