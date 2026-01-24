#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_Crystal.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_Crystal : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> JustTimeVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pJustTimeVfx;
    
public:
    AHbkGimmick_Crystal(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSignificanceChanged(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnJustTiming_Crystal(int32 Count);
    
};

