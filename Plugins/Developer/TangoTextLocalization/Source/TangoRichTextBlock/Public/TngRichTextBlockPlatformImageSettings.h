#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TngRichTextBlockPlatformImageSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UTngRichTextBlockPlatformImageSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> ImageSets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> ImageSetsForCook;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ImageSetTypeNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImageSetTypeNameForKeyboardMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> CachedImageSets;
    
    UTngRichTextBlockPlatformImageSettings();

};

