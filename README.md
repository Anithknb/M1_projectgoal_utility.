# M1_projectgoal_utility.
Library management system 

#Badge
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/336831a1aeba447090acaec6f5bdae2f)](https://www.codacy.com/gh/Anithknb/M1_projectgoal_utility./dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Anithknb/M1_projectgoal_utility.&amp;utm_campaign=Badge_Grade)

Badge 
[![CI](https://github.com/Anithknb/M1_projectgoal_utility./actions/workflows/main.yml/badge.svg?branch=main)](https://github.com/Anithknb/M1_projectgoal_utility./actions/workflows/main.yml)

- name: Run Parasoft C/C++test
  # You may pin to the exact commit or the version.
  # uses: parasoft/run-cpptest-action@aeb0150eeb0f96098ad3bac53609fd462f88c4f6
  uses: parasoft/run-cpptest-action@1.0.1
  with:
    # Installation folder of Parasoft C/C++test. If not specified, the cpptestcli executable must be added to $PATH.
    installDir: # optional
    # Working directory for running C/C++test.
    workingDir: # optional, default is ${{ github.workspace }}
    # Identifier of a compiler configuration. Ensure you specify the configuration that matches your compiler.
    compilerConfig: # optional, default is gcc_9-64
    # Test configuration to be used for code analysis.
    testConfig: # optional, default is builtin://Recommended Rules
    # Output folder for reports from code analysis.
    reportDir: # optional, default is reports
    # Format of reports from code analysis.
    reportFormat: # optional, default is xml,html,sarif
    # Input scope for analysis (typically, cpptestscan.bdf or compile_commands.json, depending on the project type and the build system).
    input: # optional, default is cpptestscan.bdf
    # Additional parameters for the cpptestcli executable.
    additionalParams: # optional, default is 
    # Command line pattern for running C/C++test.
    commandLinePattern: # optional, default is ${cpptestcli} -compiler "${compilerConfig}" -config "${testConfig}" -property report.format=${reportFormat} -report "${reportDir}" -module . -input "${input}" ${additionalParams}
