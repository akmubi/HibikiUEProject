#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_CharaHologram.h"
#include "HbkCh4000_RTKorsica.generated.h"

class AActor;
class UAkAudioEvent;

UCLASS(Blueprintable)
class AHbkCh4000_RTKorsica : public AHbkGimmick_CharaHologram {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkCh4000_RTKorsica_OnEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCh4000_RTKorsica_OnEvent OnInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCh4000_RTKorsica_OnEvent OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AppearanceSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pAppearanceSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> DisappearanceSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pDisappearanceSE;
    
public:
    AHbkCh4000_RTKorsica(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Interactor);
    
};

