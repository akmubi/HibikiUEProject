#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkGimmickClockSettings.h"
#include "HbkGimmickClockSound.h"
#include "HbkGimmickClockComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickClockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndAnimDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickClockSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickClockSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ActivateTimer;
    
    UHbkGimmickClockComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnActivate(AActor* Activator);
    
};

