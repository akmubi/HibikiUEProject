#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkHintRoboManagerActor.generated.h"

class AHbkNp0900_HintRobo;

UCLASS(Blueprintable)
class HIBIKI_API AHbkHintRoboManagerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkNp0900_HintRobo>> HintRoboList;
    
public:
    AHbkHintRoboManagerActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateEntry();
    
    UFUNCTION(BlueprintCallable)
    void ClearEntry();
    
};

