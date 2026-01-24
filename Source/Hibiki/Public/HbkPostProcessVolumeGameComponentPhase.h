#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkPostProcessVolumeGameComponentPhase.generated.h"

USTRUCT(BlueprintType)
struct FHbkPostProcessVolumeGameComponentPhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideShadowTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ShadowTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCharaPostProcessTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CharaPostProcessTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCharaEnvLightingTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CharaEnvLightingTableRowHandle;
    
    HIBIKI_API FHbkPostProcessVolumeGameComponentPhase();
};

