#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EHbkNote.h"
#include "HbkGimmick_MagnetRailCommon.generated.h"

class UTngSplineComponent;

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailCommon : public AActor {
    GENERATED_BODY()
public:
    AHbkGimmick_MagnetRailCommon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetWorldTransformAtDistanceAlongSpline(UTngSplineComponent* Spline, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDistanceAtNoteCount(float Speed, int32 NoteCount, EHbkNote HbkNote, float BPM);
    
};

