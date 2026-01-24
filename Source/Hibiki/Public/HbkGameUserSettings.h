#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "HbkGameUserSettings.generated.h"

class UHbkGameUserSettings;
class UObject;

UCLASS(Blueprintable, Config=Engine)
class UHbkGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ProjectSettingVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAudioOutputStereoEnabled;
    
public:
    UHbkGameUserSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkGameUserSettings* K2_GetHbkGameUserSettings(UObject* WorldContextObject);
    
};

