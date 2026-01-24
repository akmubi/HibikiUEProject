#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_JukeboxChangeMat.h"
#include "HbkGimmick_JukeboxPanelLight.h"
#include "HbkGimmick_Jukebox.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_Jukebox : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t curveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_JukeboxChangeMat> ChangeMatArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_JukeboxPanelLight> PanelLightArray;
    
public:
    AHbkGimmick_Jukebox(const FObjectInitializer& ObjectInitializer);

};

