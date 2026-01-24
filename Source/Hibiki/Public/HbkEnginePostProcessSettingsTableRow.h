#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Engine/DataTable.h"
#include "HbkEnginePostProcessSettingsTableRow.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnginePostProcessSettingsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings EngineSettings;
    
    HIBIKI_API FHbkEnginePostProcessSettingsTableRow();
};

