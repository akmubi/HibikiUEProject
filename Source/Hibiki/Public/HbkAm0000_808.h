#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerCharacterBase.h"
#include "HbkAm0000_808.generated.h"

class UHbkCostumeMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkAm0000_808 : public AHbkPlayerCharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* HbkCostumeMeshComp;
    
public:
    AHbkAm0000_808(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetForcePermitGrappling(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForcePermitGrappling() const;
    
};

