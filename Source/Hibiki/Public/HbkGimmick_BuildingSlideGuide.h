#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_SplineMagnetBase.h"
#include "HbkGimmick_BuildingSlideGuide.generated.h"

class AHbkGimmick_MagnetRailJump;

UCLASS(Blueprintable)
class AHbkGimmick_BuildingSlideGuide : public AHbkGimmick_SplineMagnetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_MagnetRailJump* JumpActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAxisScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveYAccelerationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveYDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMoveRotatorZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlayerMoveLocationYRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestPlayerMove;
    
public:
    AHbkGimmick_BuildingSlideGuide(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceEndBuildingSlide();
    
};

