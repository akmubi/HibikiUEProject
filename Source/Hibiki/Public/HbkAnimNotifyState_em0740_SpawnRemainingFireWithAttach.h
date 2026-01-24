#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotifyState_em0740_SpawnRemainingFireWithAttach.generated.h"

class AHbkEnemyFireBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UHbkAnimNotifyState_em0740_SpawnRemainingFireWithAttach : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEnemyFireBase> FireClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnLocationBoneName;
    
public:
    UHbkAnimNotifyState_em0740_SpawnRemainingFireWithAttach();

};

