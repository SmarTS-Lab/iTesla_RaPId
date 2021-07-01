#define DYNEventSpecial
/* DSblock model generated by Dymola from Modelica model DuffingOscillator.DuffingOscillator
 Dymola Version 2019 FD01 (64-bit), 2018-10-10 translated this at Wed Apr 21 15:56:39 2021

   */
#ifndef DYN_MULTINSTANCE
#define DYN_MULTINSTANCE 1
#endif

#include <matrixop.h>
/* Declaration of C-structs */
/* Prototypes for functions used in model */
/* Codes used in model */
/* DSblock C-code: */

#define NX_    2
#define NX2_   1
#define NU_    0
#define NY_    0
#define NW_    83
#define NP_    30
#define NPS_   0
#define ND_   0
#define NXP_   0
#define NInitial_   0
#define MAXAuxStr_   0
#define MAXAuxStrLen_   500
#define NHash1_ 1607681736
#define NHash2_ 1919924993
#define NHash3_ 0
#define NI_    0
#define NRelF_ 3
#define NRel_  3
#define NTim_  1
#define NSamp_ 0
#define NCons_ 0
#define NA_    44
#define SizePre_ 0
#define SizeEq_ 5
#define SizeDelay_ 0
#define QNLmax_ 1
#define MAXAux 0
#define NrDymolaTimers_ 0
#define NWhen_ 0
#define NCheckIf_ 0
#define NGlobalHelp_ 85
#define NGlobalHelpI_ 31
#ifndef NExternalObject_
#define NExternalObject_ 0
#endif
#include <moutil.c>
DYMOLA_STATIC unsigned int FMIClockValueReferences_[1]={0};
DYMOLA_STATIC unsigned int FMIClockFirstValueReferences_[1]={0};
PreNonAliasDef(0)
PreNonAliasDef(1)
PreNonAliasDef(2)
PreNonAliasDef(3)
PreNonAliasDef(4)
PreNonAliasDef(5)
#if !defined(DYM2CCUR)
 DYMOLA_STATIC const char*modelName="DuffingOscillator.DuffingOscillator";
#endif
DYMOLA_STATIC const char*usedLibraries[]={0};
DYMOLA_STATIC const char*dllLibraryPath[]={0};
DYMOLA_STATIC const char*default_dymosim_license_filename=
 "c:/users/meagh/appdata/roaming/dassaultsystemes/dymola/dymola.lic";
DYMOLA_STATIC const char*GUIDString="{ae7efcfe-a9c3-4509-bcbe-d73cd83d37df}";
DYMOLA_STATIC const double cvodeTolerance=1E-05;
#define FMIStateValueReferencesDef_ 1
DYMOLA_STATIC unsigned int FMIStateValueReferences_[2]={
33554432, 33554433};
#include <dsblock1.c>

/* Define variable names. */

#define Sections_

TranslatedEquations

InitialSection
#if defined(DynSimStruct) || defined(BUILDFMU)
DYNX(W_,5) = false;
DYNX(W_,9) = 1;
DYNX(W_,10) = 1;
DYNX(W_,14) = false;
DYNX(W_,18) = 1;
DYNX(W_,19) = 1;
DYNX(W_,23) = false;
DYNX(W_,40) = false;
DYNX(W_,45) = false;
DYNX(W_,51) = false;
DYNX(W_,67) = 0;
DYNX(W_,61) = 0;
DYNX(W_,2) = 0;
DYNX(W_,27) = 0;
DYNX(W_,56) = 0;
DYNX(W_,29) = 0;
DYNX(W_,73) = 0;
DYNX(W_,32) = 0;
DYNX(W_,33) = 0;
DYNX(W_,59) = 0.0;
DYNX(W_,62) = 0.0;
DYNX(W_,60) = 0.0;
DYNX(W_,65) = 0.0;
DYNX(W_,68) = 0.0;
DYNX(W_,66) = 0.0;
DYNX(W_,12) = 0.0;
DYNX(W_,58) = 0.0;
DYNX(W_,64) = 0.0;
DYNX(W_,63) = 0.0;
DYNX(W_,69) = 0.0;
DYNX(W_,72) = 0.0;
DYNX(W_,71) = 0.0;
DYNX(W_,79) = 0.0;
#endif
if (!DymolaUserHomotopy) UpdateInitVars(time, X_, XD_, U_, DP_, IP_, LP_, F_, Y_, W_, QZ_, duser_, iuser_, cuser_, did_, 1);
BoundParameterSection
DYNX(W_,24) = DYNX(DP_,9);
AssertModelica(1+DYNX(DP_,10)*(DYNX(W_,24)-DYNX(DP_,9)) >= 1E-15,
  "1+resistor3.alpha*(resistor3.T-resistor3.T_ref) >= 1E-15", "Temperature outside scope of model!");
DYNX(W_,41) = DYNX(DP_,13);
AssertModelica(1+DYNX(DP_,14)*(DYNX(W_,41)-DYNX(DP_,13)) >= 1E-15,
  "1+resistor1.alpha*(resistor1.T-resistor1.T_ref) >= 1E-15", "Temperature outside scope of model!");
DYNX(W_,46) = DYNX(DP_,16);
AssertModelica(1+DYNX(DP_,17)*(DYNX(W_,46)-DYNX(DP_,16)) >= 1E-15,
  "1+resistor2.alpha*(resistor2.T-resistor2.T_ref) >= 1E-15", "Temperature outside scope of model!");
DYNX(W_,52) = DYNX(DP_,19);
AssertModelica(1+DYNX(DP_,20)*(DYNX(W_,52)-DYNX(DP_,19)) >= 1E-15,
  "1+resistor.alpha*(resistor.T-resistor.T_ref) >= 1E-15", "Temperature outside scope of model!");
DYNX(W_,74) = DYNX(DP_,24);
DYNX(W_,75) = DYNX(DP_,26);
DYNX(W_,76) = DYNX(DP_,25);
DYNX(W_,77) = DYNX(DP_,27);
DYNX(W_,78) = DYNX(DP_,28);
BoundParameterConstantSection
DYNX(W_,54) = DYNX(DP_,18)*(1+DYNX(DP_,20)*(DYNX(W_,52)-DYNX(DP_,19)));
DYNX(W_,36) = IF DYNX(DP_,11) < 0 THEN  -DYNX(DP_,11) ELSE DYNX(DP_,11);
DYNX(W_,26) = DYNX(DP_,8)*(1+DYNX(DP_,10)*(DYNX(W_,24)-DYNX(DP_,9)));
DYNX(W_,43) = DYNX(DP_,12)*(1+DYNX(DP_,14)*(DYNX(W_,41)-DYNX(DP_,13)));
DYNX(W_,48) = DYNX(DP_,15)*(1+DYNX(DP_,17)*(DYNX(W_,46)-DYNX(DP_,16)));
DYNX(W_,35) = divmacro(2,"2",DYNX(DP_,23)-DYNX(DP_,22),"constantVoltage1.V-constantVoltage.V");
BoundParameterSection
InitialSection
#if defined(DynSimStruct) || defined(BUILDFMU)
DYNX(W_,7) = true;
DYNX(W_,8) = 0;
DYNX(W_,16) = true;
DYNX(W_,17) = 0;
#endif
InitialSection
InitialStartSection
InitialSection
if (!DymolaUserHomotopy) UpdateInitVars(time, X_, XD_, U_, DP_, IP_, LP_, F_, Y_, W_, QZ_, duser_, iuser_, cuser_, did_, 1);
DefaultSection
InitializeData(0)
InitialSection
InitialSectionB
Init_=false;InitializeData(2);Init_=true;
EndInitialSection

OutputSection

DynamicsSection
DYNX(W_,49) = DYNX(W_,54)*DYNX(X_,1);

MixedSystemOfEquations(7, DYNX(DYNhelp,0))

   /* Linear system of equations to solve. */
  /* Tag: simulation.linear[1] */
  /* Introducing 10 common subexpressions used in 6 expressions */
  /* Of the common subexpressions 10 are reals, 0 are integers, and 0
     are booleans. */
  DYNX(DYNhelp,7) = DYNX(DP_,5)*DYNX(DP_,6);
  DYNX(DYNhelp,8) = DYNX(DP_,1)*DYNX(DP_,2);
  /* Automatic tearing of linear system of 7 simultaneous equations
  gave a linear system of 2 equations for numerical solution.*/
  {
    const char*const varnames_[]={"diode.s", "diode1.s"};
    const double nominal_[]={1, 1};
    DidLinearSystemOfEquations(J, b, y, 2, DYNX(DYNhelp,9), 24, DYNX(did_->helpvari_vec,0), 8);
    /* Jacobian depending on discrete variables */
    /* Special case for simplified event handling */
    #if defined(EventIterate_) && (EventIterate_==0)
    SetNeedFactor(J);
    #else
    if (NewParametersJac||DYNEvent|| dymolaEventsNr_!=*(factoredForEventsP_))
       SetNeedFactor(J);
    #endif
    if (NeedFactor(J)) {
      *(factoredForEventsP_)=dymolaEventsNr_;
      MatrixZeros(J);
      DYNX(DYNhelp,33) = IF DYNX(W_,7) THEN 1 ELSE DYNX(DP_,0);
      DYNX(DYNhelp,34) = IF DYNX(W_,7) THEN DYNX(DP_,1) ELSE 1;
      DYNX(DYNhelp,35) = IF DYNX(W_,16) THEN DYNX(DP_,5) ELSE 1;
      SetMatrixLeading(J, 1, 1, 2, DYNX(DYNhelp,33));
      SetMatrixLeading(J, 1, 2, 2, IF DYNX(W_,16) THEN 1 ELSE DYNX(DP_,4));
      SetMatrixLeading(J, 2, 1, 2, DYNX(W_,26)*DYNX(DYNhelp,34)+DYNX(DYNhelp,33));
      SetMatrixLeading(J, 2, 2, 2, (-1.0)*DYNX(W_,26)*DYNX(DYNhelp,35));
    }
    SetVector(b, 1,  -(DYNX(DP_,6)+DYNX(DP_,2)));
    SetVector(b, 2,  -(DYNX(X_,0)-DYNX(W_,26)*DYNX(DYNhelp,7)+DYNX(W_,26)*
      DYNX(DYNhelp,8)+DYNX(DP_,2)));
    SetVector(y, 1, RememberSimple_(DYNX(W_,8), 0));
    SetVector(y, 2, RememberSimple_(DYNX(W_,17), 1));
    SolveLinearSystemOfEquationsMixed(J, b, y, 1);
    DYNX(W_,8) = GetVector(y, 1);
    DYNX(W_,17) = GetVector(y, 2);
    EndStaticLinearSystemOfEquations(J);
  }
  DYNX(W_,11) = DYNX(W_,17)*DYNX(DYNhelp,35)+DYNX(DYNhelp,7);
  DYNX(W_,1) = DYNX(W_,8)*DYNX(DYNhelp,34)+DYNX(DYNhelp,8);
  DYNX(W_,21) = DYNX(W_,1)-DYNX(W_,11);
  DYNX(W_,0) = DYNX(W_,8)*DYNX(DYNhelp,33)+DYNX(DP_,2);
  DYNX(W_,20) = DYNX(W_,26)*DYNX(W_,21);
   /* End of Equation Block */ 


  MixedModeStartBoolean
  UpdateVariableNamed(DYNX(W_,16),"diode1.off", Less(DYNX(W_,17),"diode1.s", 0,
    "0", 0));
  UpdateVariableNamed(DYNX(W_,7),"diode.off", Less(DYNX(W_,8),"diode.s", 0,"0", 1));
  MixedModeInit(2, DYNX(DYNhelp,36))
  ThetaMixedCross(0,0)
  ThetaMixedCross(1,1)
  MixedModeEndBoolean
  UpdateReal(DYNX(W_,20), 1)
  UpdateReal(DYNX(W_,21), 2)
  UpdateReal(DYNX(W_,8), 3)
  UpdateReal(DYNX(W_,1), 4)
  UpdateReal(DYNX(W_,11), 5)
  UpdateReal(DYNX(W_,17), 6)
  UpdateReal(DYNX(W_,0), 7)
EndMixedSystemOfEquations

DYNX(W_,39) = DYNX(W_,77)+(IF LessTime(DYNX(W_,78), 0) THEN 0 ELSE DYNX(W_,74)*
  sin(6.283185307179586*DYNX(W_,75)*(DYNTime-DYNX(W_,78))+DYNX(W_,76)));

{ /* Non-linear system of equations to solve. */
/* Tag: simulation.nonlinear[1] */
/* Introducing 17 common subexpressions used in 11 expressions */
/* Of the common subexpressions 16 are reals, 0 are integers, and 1
   are booleans. */
const char*const varnames_[]={"resistor1.i"};
const double nominal_[]={1};
NonLinearSystemOfEquationsNH(Jacobian__, residue__, x__, 1, 0, 0, 1, 1, 2, 
  DYNX(DYNhelp,38), 39, DYNX(did_->helpvari_vec,8), 23);
NonLinearSystemSave(DYNX(W_,0), 0);
NonLinearSystemSave(DYNX(W_,39), 1);
SetInitVectorNH(x__, 1, DYNX(W_,38), Remember_(DYNX(W_,38), 2));
Residues;
  DYNX(W_,37) = DYNX(W_,43)*DYNX(W_,38);
  DYNX(W_,34) = DYNX(W_,37)-(DYNX(W_,39)+DYNX(W_,0));
  DYNX(DYNhelp,77) = DYNX(W_,36)*DYNX(W_,34);
  DYNX(DYNhelp,78) = DYNX(W_,35)*DYNX(W_,34);
  DYNX(DYNhelp,79) = LessS(DYNX(DYNhelp,78),"opAmp.f*opAmp.vin", 0,"0", 2);
  DYNX(DYNhelp,80) = 1+DYNX(W_,36)*(IF DYNX(DYNhelp,79) THEN  -DYNX(DYNhelp,78)
     ELSE DYNX(DYNhelp,78));
  DYNX(DYNhelp,81) = divmacro(1.0,"1.0",DYNX(DYNhelp,80),"1+opAmp.absSlope*smooth(0, (if opAmp.f*opAmp.vin < 0 then  -opAmp.f*opAmp.vin else opAmp.f*opAmp.vin))");
  DYNX(W_,30) = 0.5*(DYNX(DP_,23)+DYNX(DP_,22))+DYNX(DYNhelp,81)*
    DYNX(DYNhelp,77);
  DYNX(W_,44) = DYNX(W_,48)*DYNX(W_,38);
SetVector(residue__, 1, DYNX(W_,44)+DYNX(W_,34)+DYNX(W_,0)+DYNX(W_,30));

Jacobian(Jacobian__)
MatrixZeros(Jacobian__);
DYNX(DYNhelp,82) = DYNX(DYNhelp,77)*DYNX(W_,36)*(IF DYNX(DYNhelp,79) THEN  -
  DYNX(W_,35) ELSE DYNX(W_,35));
DYNX(DYNhelp,83) = sqr(DYNX(DYNhelp,80));
DYNX(DYNhelp,84) = divmacro(1.0,"1.0",DYNX(DYNhelp,83),"(1+opAmp.absSlope*smooth(0, (if opAmp.f*opAmp.vin < 0 then  -opAmp.f*opAmp.vin else opAmp.f*opAmp.vin)))^2");
SetMatrixLeading(Jacobian__, 1, 1, 1, (1.0+DYNX(DYNhelp,81)*DYNX(W_,36)-
  DYNX(DYNhelp,84)*DYNX(DYNhelp,82))*DYNX(W_,43)+DYNX(W_,48));

SolveNonLinearSystemOfEquationsNH(Jacobian__, 0, 0, 0, residue__, x__, 1, 
  "Tag: simulation.nonlinear[1]");
DYNX(W_,38) = GetVector(x__, 1);
EndNonLinearSystemOfEquationsNH(residue__, x__, 1);
 /* End of Non-Linear Equation Block */ }



DYNX(W_,28) =  -(DYNX(W_,34)+DYNX(W_,0));
DYNX(W_,50) = DYNX(W_,30)-DYNX(W_,49);
DYNX(W_,81) = DYNX(W_,50)-DYNX(X_,0);
 /* Linear system of equations to solve. */
DYNX(F_,1) = RememberSimple_(DYNX(F_,1), 3);
SolveScalarLinearParametric(DYNX(DP_,29),"inductor.L", DYNX(W_,81),"inductor.v",
   DYNX(F_,1),"der(inductor.i)");
 /* End of Equation Block */ 

DYNX(W_,55) = DYNX(X_,1)+DYNX(W_,21);
 /* Linear system of equations to solve. */
DYNX(F_,0) = RememberSimple_(DYNX(F_,0), 4);
SolveScalarLinearParametric( -DYNX(DP_,21)," -capacitor.C",  -DYNX(W_,55),
  " -capacitor.i", DYNX(F_,0),"der(capacitor.v)");
 /* End of Equation Block */ 

DYNX(W_,57) =  -DYNX(W_,55);
DYNX(W_,4) =  -DYNX(W_,1);
DYNX(W_,3) =  -DYNX(W_,0);
DYNX(W_,13) =  -DYNX(W_,11);
DYNX(W_,80) =  -DYNX(W_,38);
DYNX(W_,22) =  -DYNX(W_,21);

AcceptedSection1

AcceptedSection2
DYNX(W_,6) = DYNX(W_,0)*DYNX(W_,1);
DYNX(W_,15) =  -DYNX(W_,0)*DYNX(W_,11);
DYNX(W_,25) = DYNX(W_,20)*DYNX(W_,21);
DYNX(W_,31) = DYNX(W_,38)-DYNX(X_,1);
DYNX(W_,42) = DYNX(W_,37)*DYNX(W_,38);
DYNX(W_,47) = DYNX(W_,44)*DYNX(W_,38);
DYNX(W_,53) = DYNX(W_,49)*DYNX(X_,1);
DYNX(W_,70) = DYNX(W_,11)-DYNX(W_,1);
DYNX(W_,82) =  -DYNX(X_,1);

DefaultSection
InitializeData(1)
EndTranslatedEquations

#include <dsblock6.c>

PreNonAliasNew(0)
StartNonAlias(0)
DeclareVariable("diode.v", "Voltage drop of the two pins (= p.v - n.v) [V]", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareVariable("diode.i", "Current flowing from pin p to pin n [A]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("diode.p.v", "Potential at the pin [V]", 0, 0.0,0.0,0.0,0,521)
DeclareAlias2("diode.p.i", "Current flowing into the pin [A]", "diode.i", 1, 5, 1,\
 132)
DeclareVariable("diode.n.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("diode.n.i", "Current flowing into the pin [A]", 0.0, 0.0,0.0,\
0.0,0,776)
DeclareParameter("diode.Ron", "Forward state-on differential resistance (closed resistance) [Ohm]",\
 0, 1E-05, 0.0,1E+100,0.0,0,560)
DeclareParameter("diode.Goff", "Backward state-off conductance (opened conductance) [S]",\
 1, 1E-05, 0.0,1E+100,0.0,0,560)
DeclareParameter("diode.Vknee", "Forward threshold voltage [V]", 2, 0.7, 0.0,\
1E+100,0.0,0,560)
DeclareVariable("diode.useHeatPort", "=true, if heatPort is enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareParameter("diode.T", "Fixed device temperature if useHeatPort = false [K|degC]",\
 3, 293.15, 0.0,1E+100,300.0,0,560)
DeclareVariable("diode.LossPower", "Loss power leaving component via heatPort [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("diode.T_heatPort", "Temperature of heatPort [K|degC]", "diode.T", 1,\
 7, 3, 0)
DeclareVariable("diode.off", "Switching state [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,706)
DeclareVariable("diode.s", "Auxiliary variable for actual position on the ideal diode characteristic [1]",\
 0, 0.0,0.0,0.0,0,2560)
DeclareVariable("diode.unitVoltage", "[V]", 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("diode.unitCurrent", "[A]", 1, 0.0,0.0,0.0,0,1537)
DeclareAlias2("diode1.v", "Voltage drop of the two pins (= p.v - n.v) [V]", \
"diode.n.v", 1, 5, 3, 0)
DeclareVariable("diode1.i", "Current flowing from pin p to pin n [A]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareAlias2("diode1.p.v", "Potential at the pin [V]", "diode.n.v", 1, 5, 3, 4)
DeclareAlias2("diode1.p.i", "Current flowing into the pin [A]", "diode1.i", 1, 5,\
 11, 132)
DeclareVariable("diode1.n.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("diode1.n.i", "Current flowing into the pin [A]", 0.0, 0.0,0.0,\
0.0,0,776)
DeclareParameter("diode1.Ron", "Forward state-on differential resistance (closed resistance) [Ohm]",\
 4, 1E-05, 0.0,1E+100,0.0,0,560)
DeclareParameter("diode1.Goff", "Backward state-off conductance (opened conductance) [S]",\
 5, 1E-05, 0.0,1E+100,0.0,0,560)
DeclareParameter("diode1.Vknee", "Forward threshold voltage [V]", 6, 0.7, 0.0,\
1E+100,0.0,0,560)
DeclareVariable("diode1.useHeatPort", "=true, if heatPort is enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareParameter("diode1.T", "Fixed device temperature if useHeatPort = false [K|degC]",\
 7, 293.15, 0.0,1E+100,300.0,0,560)
DeclareVariable("diode1.LossPower", "Loss power leaving component via heatPort [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("diode1.T_heatPort", "Temperature of heatPort [K|degC]", \
"diode1.T", 1, 7, 7, 0)
DeclareVariable("diode1.off", "Switching state [:#(type=Boolean)]", true, \
0.0,0.0,0.0,0,706)
DeclareVariable("diode1.s", "Auxiliary variable for actual position on the ideal diode characteristic [1]",\
 0, 0.0,0.0,0.0,0,2560)
DeclareVariable("diode1.unitVoltage", "[V]", 1, 0.0,0.0,0.0,0,1537)
DeclareVariable("diode1.unitCurrent", "[A]", 1, 0.0,0.0,0.0,0,1537)
DeclareParameter("resistor3.R", "Resistance at temperature T_ref [Ohm|kOhm]", 8,\
 10000, 0.0,0.0,0.0,0,560)
DeclareParameter("resistor3.T_ref", "Reference temperature [K|degC]", 9, 300.15,\
 0.0,1E+100,300.0,0,560)
DeclareParameter("resistor3.alpha", "Temperature coefficient of resistance (R_actual = R*(1 + alpha*(T_heatPort - T_ref)) [1/K]",\
 10, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("resistor3.v", "Voltage drop of the two pins (= p.v - n.v) [V]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("resistor3.i", "Current flowing from pin p to pin n [A]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareAlias2("resistor3.p.v", "Potential at the pin [V]", "diode.n.v", 1, 5, 3,\
 4)
DeclareAlias2("resistor3.p.i", "Current flowing into the pin [A]", "resistor3.i", 1,\
 5, 21, 132)
DeclareAlias2("resistor3.n.v", "Potential at the pin [V]", "capacitor.v", 1, 1, 0,\
 4)
DeclareVariable("resistor3.n.i", "Current flowing into the pin [A]", 0.0, \
0.0,0.0,0.0,0,776)
DeclareVariable("resistor3.useHeatPort", "=true, if heatPort is enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("resistor3.T", "Fixed device temperature if useHeatPort = false [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("resistor3.LossPower", "Loss power leaving component via heatPort [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("resistor3.T_heatPort", "Temperature of heatPort [K|degC]", \
"resistor3.T", 1, 5, 24, 0)
DeclareVariable("resistor3.R_actual", "Actual resistance = R*(1 + alpha*(T_heatPort - T_ref)) [Ohm]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("opAmp.Slope", "Slope of the out.v/vin characteristic at vin=0",\
 11, 10000, 0.0,0.0,0.0,0,560)
DeclareAlias2("opAmp.in_p.v", "Potential at the pin [V]", "diode.n.v", 1, 5, 3, 4)
DeclareVariable("opAmp.in_p.i", "Current flowing into the pin [A]", 0, 0.0,0.0,\
0.0,0,777)
DeclareVariable("opAmp.in_n.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("opAmp.in_n.i", "Current flowing into the pin [A]", 0, 0.0,0.0,\
0.0,0,777)
DeclareVariable("opAmp.out.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,520)
DeclareVariable("opAmp.out.i", "Current flowing into the pin [A]", 0.0, 0.0,0.0,\
0.0,0,776)
DeclareAlias2("opAmp.VMax.v", "Potential at the pin [V]", "constantVoltage1.V", 1,\
 7, 23, 4)
DeclareVariable("opAmp.VMax.i", "Current flowing into the pin [A]", 0, 0.0,0.0,\
0.0,0,777)
DeclareAlias2("opAmp.VMin.v", "Potential at the pin [V]", "constantVoltage.V", 1,\
 7, 22, 4)
DeclareVariable("opAmp.VMin.i", "Current flowing into the pin [A]", 0, 0.0,0.0,\
0.0,0,777)
DeclareVariable("opAmp.vin", "input voltage [V]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("opAmp.f", "auxiliary variable", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("opAmp.absSlope", "", 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("resistor1.R", "Resistance at temperature T_ref [Ohm|kOhm]", 12,\
 10000, 0.0,0.0,0.0,0,560)
DeclareParameter("resistor1.T_ref", "Reference temperature [K|degC]", 13, 300.15,\
 0.0,1E+100,300.0,0,560)
DeclareParameter("resistor1.alpha", "Temperature coefficient of resistance (R_actual = R*(1 + alpha*(T_heatPort - T_ref)) [1/K]",\
 14, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("resistor1.v", "Voltage drop of the two pins (= p.v - n.v) [V]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("resistor1.i", "Current flowing from pin p to pin n [A]", 0.0, \
0.0,0.0,0.0,0,576)
DeclareVariable("resistor1.p.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("resistor1.p.i", "Current flowing into the pin [A]", "resistor1.i", 1,\
 5, 38, 132)
DeclareAlias2("resistor1.n.v", "Potential at the pin [V]", "opAmp.in_n.v", 1, 5,\
 28, 4)
DeclareAlias2("resistor1.n.i", "Current flowing into the pin [A]", "ground4.p.i", 1,\
 5, 80, 132)
DeclareVariable("resistor1.useHeatPort", "=true, if heatPort is enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("resistor1.T", "Fixed device temperature if useHeatPort = false [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("resistor1.LossPower", "Loss power leaving component via heatPort [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("resistor1.T_heatPort", "Temperature of heatPort [K|degC]", \
"resistor1.T", 1, 5, 41, 0)
DeclareVariable("resistor1.R_actual", "Actual resistance = R*(1 + alpha*(T_heatPort - T_ref)) [Ohm]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("resistor2.R", "Resistance at temperature T_ref [Ohm|kOhm]", 15,\
 10000, 0.0,0.0,0.0,0,560)
DeclareParameter("resistor2.T_ref", "Reference temperature [K|degC]", 16, 300.15,\
 0.0,1E+100,300.0,0,560)
DeclareParameter("resistor2.alpha", "Temperature coefficient of resistance (R_actual = R*(1 + alpha*(T_heatPort - T_ref)) [1/K]",\
 17, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("resistor2.v", "Voltage drop of the two pins (= p.v - n.v) [V]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("resistor2.i", "Current flowing from pin p to pin n [A]", \
"resistor1.i", 1, 5, 38, 0)
DeclareAlias2("resistor2.p.v", "Potential at the pin [V]", "opAmp.in_n.v", 1, 5,\
 28, 4)
DeclareAlias2("resistor2.p.i", "Current flowing into the pin [A]", "resistor1.i", 1,\
 5, 38, 132)
DeclareAlias2("resistor2.n.v", "Potential at the pin [V]", "opAmp.out.v", 1, 5, 30,\
 4)
DeclareAlias2("resistor2.n.i", "Current flowing into the pin [A]", "ground4.p.i", 1,\
 5, 80, 132)
DeclareVariable("resistor2.useHeatPort", "=true, if heatPort is enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("resistor2.T", "Fixed device temperature if useHeatPort = false [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("resistor2.LossPower", "Loss power leaving component via heatPort [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("resistor2.T_heatPort", "Temperature of heatPort [K|degC]", \
"resistor2.T", 1, 5, 46, 0)
DeclareVariable("resistor2.R_actual", "Actual resistance = R*(1 + alpha*(T_heatPort - T_ref)) [Ohm]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("resistor.R", "Resistance at temperature T_ref [Ohm]", 18, 20, \
0.0,0.0,0.0,0,560)
DeclareParameter("resistor.T_ref", "Reference temperature [K|degC]", 19, 300.15,\
 0.0,1E+100,300.0,0,560)
DeclareParameter("resistor.alpha", "Temperature coefficient of resistance (R_actual = R*(1 + alpha*(T_heatPort - T_ref)) [1/K]",\
 20, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("resistor.v", "Voltage drop of the two pins (= p.v - n.v) [V]", \
0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("resistor.i", "Current flowing from pin p to pin n [A]", \
"inductor.i", 1, 1, 1, 0)
DeclareAlias2("resistor.p.v", "Potential at the pin [V]", "opAmp.out.v", 1, 5, 30,\
 4)
DeclareAlias2("resistor.p.i", "Current flowing into the pin [A]", "inductor.i", 1,\
 1, 1, 132)
DeclareVariable("resistor.n.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,520)
DeclareAlias2("resistor.n.i", "Current flowing into the pin [A]", "inductor.n.i", 1,\
 5, 82, 132)
DeclareVariable("resistor.useHeatPort", "=true, if heatPort is enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("resistor.T", "Fixed device temperature if useHeatPort = false [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("resistor.LossPower", "Loss power leaving component via heatPort [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("resistor.T_heatPort", "Temperature of heatPort [K|degC]", \
"resistor.T", 1, 5, 52, 0)
DeclareVariable("resistor.R_actual", "Actual resistance = R*(1 + alpha*(T_heatPort - T_ref)) [Ohm]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareState("capacitor.v", "Voltage drop of the two pins (= p.v - n.v) [V]", 0,\
 0, 0.0,0.0,0.0,0,560)
DeclareDerivative("capacitor.der(v)", "der(Voltage drop of the two pins (= p.v - n.v)) [V/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("capacitor.i", "Current flowing from pin p to pin n [A]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareAlias2("capacitor.p.v", "Potential at the pin [V]", "capacitor.v", 1, 1, 0,\
 4)
DeclareAlias2("capacitor.p.i", "Current flowing into the pin [A]", "capacitor.i", 1,\
 5, 55, 132)
DeclareVariable("capacitor.n.v", "Potential at the pin [V]", 0, 0.0,0.0,0.0,0,521)
DeclareVariable("capacitor.n.i", "Current flowing into the pin [A]", 0.0, \
0.0,0.0,0.0,0,776)
DeclareParameter("capacitor.C", "Capacitance [F|nF]", 21, 4.7E-07, 0.0,1E+100,\
0.0,0,560)
DeclareVariable("ground.p.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareAlias2("ground.p.i", "Current flowing into the pin [A]", "capacitor.i", 1,\
 5, 55, 132)
DeclareParameter("constantVoltage.V", "Value of constant voltage [V]", 22, 2, \
0.0,0.0,0.0,0,560)
DeclareAlias2("constantVoltage.v", "Voltage drop of the two pins (= p.v - n.v) [V]",\
 "constantVoltage.V", 1, 7, 22, 0)
DeclareVariable("constantVoltage.i", "Current flowing from pin p to pin n [A]", \
0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("constantVoltage.p.v", "Potential at the pin [V]", \
"constantVoltage.V", 1, 7, 22, 4)
DeclareVariable("constantVoltage.p.i", "Current flowing into the pin [A]", 0.0, \
0.0,0.0,0.0,0,777)
DeclareVariable("constantVoltage.n.v", "Potential at the pin [V]", 0, 0.0,0.0,\
0.0,0,521)
DeclareVariable("constantVoltage.n.i", "Current flowing into the pin [A]", 0.0, \
0.0,0.0,0.0,0,777)
DeclareVariable("ground1.p.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("ground1.p.i", "Current flowing into the pin [A]", 0.0, 0.0,0.0,\
0.0,0,777)
DeclareParameter("constantVoltage1.V", "Value of constant voltage [V]", 23, -2, \
0.0,0.0,0.0,0,560)
DeclareAlias2("constantVoltage1.v", "Voltage drop of the two pins (= p.v - n.v) [V]",\
 "constantVoltage1.V", 1, 7, 23, 0)
DeclareVariable("constantVoltage1.i", "Current flowing from pin p to pin n [A]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("constantVoltage1.p.v", "Potential at the pin [V]", \
"constantVoltage1.V", 1, 7, 23, 4)
DeclareVariable("constantVoltage1.p.i", "Current flowing into the pin [A]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareVariable("constantVoltage1.n.v", "Potential at the pin [V]", 0, 0.0,0.0,\
0.0,0,521)
DeclareVariable("constantVoltage1.n.i", "Current flowing into the pin [A]", 0.0,\
 0.0,0.0,0.0,0,777)
DeclareVariable("ground2.p.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("ground2.p.i", "Current flowing into the pin [A]", 0.0, 0.0,0.0,\
0.0,0,776)
DeclareVariable("ground3.p.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("ground3.p.i", "Current flowing into the pin [A]", 0.0, 0.0,0.0,\
0.0,0,777)
DeclareParameter("sineVoltage.V", "Amplitude of sine wave [V|mV]", 24, 0.24, \
0.0,0.0,0.0,0,560)
DeclareParameter("sineVoltage.phase", "Phase of sine wave [rad|deg]", 25, 0, \
0.0,0.0,0.0,0,560)
DeclareParameter("sineVoltage.freqHz", "Frequency of sine wave [Hz|kHz]", 26, 1500,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("sineVoltage.v", "Voltage drop of the two pins (= p.v - n.v) [V]",\
 "resistor1.p.v", 1, 5, 39, 0)
DeclareAlias2("sineVoltage.i", "Current flowing from pin p to pin n [A]", \
"ground4.p.i", 1, 5, 80, 0)
DeclareAlias2("sineVoltage.p.v", "Potential at the pin [V]", "resistor1.p.v", 1,\
 5, 39, 4)
DeclareAlias2("sineVoltage.p.i", "Current flowing into the pin [A]", \
"ground4.p.i", 1, 5, 80, 132)
DeclareVariable("sineVoltage.n.v", "Potential at the pin [V]", 0, 0.0,0.0,0.0,0,521)
DeclareAlias2("sineVoltage.n.i", "Current flowing into the pin [A]", \
"resistor1.i", 1, 5, 38, 132)
DeclareParameter("sineVoltage.offset", "Voltage offset [V]", 27, 0, 0.0,0.0,0.0,\
0,560)
DeclareParameter("sineVoltage.startTime", "Time offset [s]", 28, 0, 0.0,0.0,0.0,\
0,560)
DeclareVariable("sineVoltage.signalSource.amplitude", "Amplitude of sine wave [V]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sineVoltage.signalSource.freqHz", "Frequency of sine wave [Hz]",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("sineVoltage.signalSource.phase", "Phase of sine wave [rad|deg]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("sineVoltage.signalSource.y", "Connector of Real output signal [V]",\
 "resistor1.p.v", 1, 5, 39, 0)
DeclareVariable("sineVoltage.signalSource.offset", "Offset of output signal y [V]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("sineVoltage.signalSource.startTime", "Output y = offset for time < startTime [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("ground4.p.v", "Potential at the pin [V]", 0.0, 0.0,0.0,0.0,0,521)
DeclareVariable("ground4.p.i", "Current flowing into the pin [A]", 0.0, 0.0,0.0,\
0.0,0,776)
DeclareVariable("inductor.v", "Voltage drop of the two pins (= p.v - n.v) [V]", \
0.0, 0.0,0.0,0.0,0,512)
DeclareState("inductor.i", "Current flowing from pin p to pin n [A]", 1, 0, \
0.0,0.0,0.0,0,560)
DeclareDerivative("inductor.der(i)", "der(Current flowing from pin p to pin n) [A/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("inductor.p.v", "Potential at the pin [V]", "resistor.n.v", 1, 5, 50,\
 4)
DeclareAlias2("inductor.p.i", "Current flowing into the pin [A]", "inductor.i", 1,\
 1, 1, 132)
DeclareAlias2("inductor.n.v", "Potential at the pin [V]", "capacitor.v", 1, 1, 0,\
 4)
DeclareVariable("inductor.n.i", "Current flowing into the pin [A]", 0.0, \
0.0,0.0,0.0,0,776)
DeclareParameter("inductor.L", "Inductance [H|mH]", 29, 0.019, 0.0,0.0,0.0,0,560)
EndNonAlias(0)

#define DymolaHaveUpdateInitVars 1
#include <dsblock5.c>

DYMOLA_STATIC void UpdateInitVars(double*time, double* X_, double* XD_, double* U_, double* DP_, int IP_[], Dymola_bool LP_[], double* F_, double* Y_, double* W_, double QZ_[], double duser_[], int iuser_[], void*cuser_[],struct DYNInstanceData*did_,int initialCall) {
}
StartDataBlock
StartEqBlock
DoRemember_(DYNX(F_,0), 0.0, 4);
DoRemember_(DYNX(F_,1), 0.0, 3);
DoRemember_(DYNX(W_,8), 0, 0);
DoRemember_(DYNX(W_,17), 0, 1);
DoRemember_(DYNX(W_,38), 0.0, 2);
EndEqBlock
EndDataBlock
