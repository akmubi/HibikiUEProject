#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_NoSave.h"
#include "EndAnimationDelegate.h"
#include "HbkGimmick_RhythmAnimationActivateExtInt.h"
#include "HbkGimmick_RhythmAnimationMesh.h"
#include "HbkGimmick_RhythmAnimation.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_RhythmAnimation : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAnimationDelegate OnEndAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RhythmAnimationMesh Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmAnimationActivateExtInt> ActivateExtInt;
    
public:
    AHbkGimmick_RhythmAnimation(const FObjectInitializer& ObjectInitializer);

};

