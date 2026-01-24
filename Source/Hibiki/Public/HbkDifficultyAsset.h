#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkDifficultyAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkDifficultyAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DifficultyParamsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelDifficultyParamsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EmDifficultyParamsTable;
    
    UHbkDifficultyAsset();

};

