#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_FerrisWheel_GondolaInfo.h"
#include "HbkGimmick_FerrisWheel.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_FerrisWheel : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FerrisWheelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_FerrisWheel_GondolaInfo> GondoraInfoArray;
    
public:
    AHbkGimmick_FerrisWheel(const FObjectInitializer& ObjectInitializer);

};

