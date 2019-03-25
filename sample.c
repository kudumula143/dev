har	CurPath[256];
VegaCmd("Get CurDir");                // Send the Get command to VEGA ZZ
strcpy(CurPath, VegaInfo -> Result);  // Copy the result in the user defined variable
