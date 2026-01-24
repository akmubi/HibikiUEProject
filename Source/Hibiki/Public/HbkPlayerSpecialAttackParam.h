#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HbkSpecialAttackAnimFolder.h"
#include "HbkPlayerSpecialAttackParam.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayerSpecialAttackParam : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpecialAttackAnimTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultSpecialAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkSpecialAttackAnimFolder> SPAnimFolderList;
    
public:
    UHbkPlayerSpecialAttackParam();

};

