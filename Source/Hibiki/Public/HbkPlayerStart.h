#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "HbkPlayerStart.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStatusPresetName;
    
    AHbkPlayerStart(const FObjectInitializer& ObjectInitializer);

};

