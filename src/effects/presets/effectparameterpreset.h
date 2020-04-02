#pragma once

#include <QDomElement>

#include "effects/defs.h"
#include "effects/effectmanifestparameter.h"

class EffectParameterPreset {
  public:
    EffectParameterPreset();
    EffectParameterPreset(const QDomElement& parameterElement);
    ~EffectParameterPreset();

  private:
    double m_dValue;
    QString m_id;
    EffectManifestParameter::LinkType m_linkType;
    bool m_bLinkInverted;
    bool m_bHidden;
};
