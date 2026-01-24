#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkHighlightStateTester.generated.h"

class UHbkHighlightState;

UCLASS(Blueprintable)
class UHbkHighlightStateTester : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHighlightState* State;
    
    UHbkHighlightStateTester();

    UFUNCTION(BlueprintCallable)
    void EndPlayerRecovery();
    
    UFUNCTION(BlueprintCallable)
    void BeginPlayerRecovery(const FString& HighlightType);
    
};

