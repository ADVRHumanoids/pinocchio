//
// Copyright (c) 2015-2020 CNRS INRIA
//

#include "pinocchio/bindings/python/algorithm/algorithms.hpp"

namespace pinocchio
{
  namespace python
  {
    
    void exposeAlgorithms()
    {
      exposeJointsAlgo();
      exposeABA();
      exposeCRBA();
      exposeCentroidal();
      exposeRNEA();
      exposeCOM();
      exposeFramesAlgo();
      exposeEnergy();
      exposeKinematics();
      
      exposeConstraintDynamics();
      exposeConstraintDynamicsDerivatives();
      exposeContactDynamics();
      exposeCAT();
      exposeJacobian();
      exposeGeometryAlgo();
      exposeKinematicRegressor();
      exposeRegressor();
      exposeCholesky();
      exposeModelAlgo();
      exposeImpulseDynamics();

      // expose derivative version of the algorithms
      exposeRNEADerivatives();
      exposeABADerivatives();
      exposeKinematicsDerivatives();
      exposeFramesDerivatives();
      exposeCentroidalDerivatives();
      exposeImpulseDynamicsDerivatives();
    }
    
  } // namespace python
} // namespace pinocchio
