#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_MagnetRailJumpRail.generated.h"

class AHbkGimmick_SplineMagnetBase;

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailJumpRail : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_SplineMagnetBase* PreviousMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_SplineMagnetBase* NextMagnet;
    
public:
    AHbkGimmick_MagnetRailJumpRail(const FObjectInitializer& ObjectInitializer);

};

