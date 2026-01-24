#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyCharacter.h"
#include "HbkEm0500_Brutal.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0500_Brutal : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> BlendAlphaList;
    
public:
    AHbkEm0500_Brutal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<float> GetBlendAlphaList();
    
};

