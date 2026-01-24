#pragma once
#include "CoreMinimal.h"
#include "StartSubMissionDelegate.h"
#include "EndSubMissionDelegate.h"
#include "ProgressDelegate.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SubMission.generated.h"

class UHbkSubMissionSettingsDataAsset;

UCLASS(Blueprintable)
class AHbkGimmick_SubMission : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartSubMissionDelegate OnStartSubMission;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndSubMissionDelegate OnEndSubMission;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressDelegate OnFirstProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressDelegate OnLastProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingsDataTableRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSubMissionSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bGaveReward;
    
public:
    AHbkGimmick_SubMission(const FObjectInitializer& ObjectInitializer);

};

