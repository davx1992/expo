package abi39_0_0.expo.modules.cellular;

import android.content.Context;

import java.util.Collections;
import java.util.List;

import abi39_0_0.org.unimodules.core.BasePackage;
import abi39_0_0.org.unimodules.core.ExportedModule;
import abi39_0_0.org.unimodules.core.ViewManager;

public class CellularPackage extends BasePackage {
  @Override
  public List<ExportedModule> createExportedModules(Context context) {
    return Collections.singletonList((ExportedModule) new CellularModule(context));
  }
}
