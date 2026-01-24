#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FHbkGimmick_SpectraInterlockType.h"
#include "HbkGimmick_SpectraInterlockActivateInfo.h"
#include "HbkGimmick_SpectraInterlockComponent.generated.h"

class AHbkGimmickBase;
class AHbkGimmick_SpectraDoor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmick_SpectraInterlockComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectraInterlockType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkGimmick_SpectraDoor> SpectraDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectraInterlockActivateInfo ClearActivateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SpectraInterlockActivateInfo AlreadyClearedActivateInfo;
    
public:
    UHbkGimmick_SpectraInterlockComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSpectraRoomClearState();
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickReady(AHbkGimmickBase* GimmickBase);
    
};

