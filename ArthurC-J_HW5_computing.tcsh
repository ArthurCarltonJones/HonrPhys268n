#!/bin/tcsh

set tmpday = `date | awk '{print $3}'`
    echo $tmpday
find ~ -type f -mtime -$tmpday
