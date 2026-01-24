#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSTestingPawn.h"
#include "HbkEQSTestingPawn.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEQSTestingPawn : public AEQSTestingPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysToUpdate;
    
    AHbkEQSTestingPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RunEQS();
    
};

