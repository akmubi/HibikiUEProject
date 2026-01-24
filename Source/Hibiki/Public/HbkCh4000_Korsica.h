#pragma once
#include "CoreMinimal.h"
#include "EHbkKorsicaGimmickInputType.h"
#include "EHbkKorsicaGimmickProgress.h"
#include "HbkPartnerCharacterBase.h"
#include "HbkCh4000_Korsica.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkCh4000_Korsica : public AHbkPartnerCharacterBase {
    GENERATED_BODY()
public:
    AHbkCh4000_Korsica(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnKorsicaGimmickProgress(EHbkKorsicaGimmickProgress GameResult);
    
    UFUNCTION(BlueprintCallable)
    void OnKorsicaGimmickInput(EHbkKorsicaGimmickInputType InputResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPartnerActionSectionName(int32 Progress) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformStartGimmickAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformProgressGimmickAction(int32 Progress);
    
};

