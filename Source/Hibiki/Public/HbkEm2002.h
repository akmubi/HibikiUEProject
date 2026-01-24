#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkEm2002.generated.h"

class UHbkAnimInstance;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm2002 : public AActor {
    GENERATED_BODY()
public:
    AHbkEm2002(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkAnimInstance* GetHbkAnimInstance() const;
    
};

