#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_WallPanelType.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_WallPanelAction.h"
#include "HbkGimmick_WallPanelDisappear.h"
#include "HbkGimmick_WallPanelMesh.h"
#include "HbkGimmick_WallPanel.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_WallPanel : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_WallPanelType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRhythmDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRhythmScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_WallPanelAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_WallPanelDisappear Disappear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_WallPanelMesh> DisappearMeshes;
    
public:
    AHbkGimmick_WallPanel(const FObjectInitializer& ObjectInitializer);

};

