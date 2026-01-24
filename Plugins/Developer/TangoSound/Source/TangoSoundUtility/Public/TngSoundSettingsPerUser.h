#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "TngSoundSettingsPerUser.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class TANGOSOUNDUTILITY_API UTngSoundSettingsPerUser : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath OutputFolderPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefleshTimeMin;
    
    UTngSoundSettingsPerUser();

};

