#pragma once
#include "CoreMinimal.h"
#include "HbkEVTutorial_ChangeAssetActivateInfo_t.h"
#include "HbkEVTutorial_ChangeAssetMaterialInfo_t.h"
#include "HbkEVTutorial_ChangeAssetShowHideInfo_t.h"
#include "HbkEVTutorial_ChangeGameEnvInfo_t.h"
#include "HbkEVTutorial_ChangeAssetInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkEVTutorial_ChangeAssetInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEVTutorial_ChangeAssetMaterialInfo_t> MaterialInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEVTutorial_ChangeAssetShowHideInfo_t ShowHideInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEVTutorial_ChangeAssetActivateInfo_t ActivateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEVTutorial_ChangeGameEnvInfo_t GameEnvInfo;
    
    HIBIKI_API FHbkEVTutorial_ChangeAssetInfo_t();
};

