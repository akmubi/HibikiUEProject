#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_DataSphereATagInfo.h"
#include "HbkGimmick_DataSphereA_OnUnlockDelegate.h"
#include "HbkGimmick_DataSphereA.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_DataSphereA : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_DataSphereA_OnUnlock OnUnlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_DataSphereATagInfo SuccessTagInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<bool> bSentEnergy;
    
public:
    AHbkGimmick_DataSphereA(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActivate() const;
    
};

