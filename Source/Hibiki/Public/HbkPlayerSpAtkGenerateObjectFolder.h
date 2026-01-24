#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerSpAtkGenerateObjectFolder.generated.h"

class AHbkPlayerSpecialAttackObjectBase;

USTRUCT(BlueprintType)
struct FHbkPlayerSpAtkGenerateObjectFolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AHbkPlayerSpecialAttackObjectBase>> GenerateObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AHbkPlayerSpecialAttackObjectBase>> FirstPickObjectList;
    
    HIBIKI_API FHbkPlayerSpAtkGenerateObjectFolder();
};

