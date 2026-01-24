#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkLevelLoadAudioCheckParamRow.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkLevelLoadAudioCheckParamRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAkAudioEvent>> BankLoadCheckList;
    
    HIBIKI_API FHbkLevelLoadAudioCheckParamRow();
};

