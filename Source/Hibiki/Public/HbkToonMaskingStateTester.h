#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkToonMaskingStateTester.generated.h"

class UHbkToonMaskingState;

UCLASS(Blueprintable)
class UHbkToonMaskingStateTester : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMaskingState* State;
    
    UHbkToonMaskingStateTester();

    UFUNCTION(BlueprintCallable)
    void UpdateOpacity(const float Opacity);
    
    UFUNCTION(BlueprintCallable)
    void EndTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginTest(const FName& RowName);
    
};

