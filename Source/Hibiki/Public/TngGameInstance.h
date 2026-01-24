#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Templates/SubclassOf.h"
#include "TngGameInstance.generated.h"

class UTngGameSystem;

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UTngGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTngGameSystem*> GameSystemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTngGameSystem>> DefaultGameSystemBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTngGameSystem>> DynamicGameSystemBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> DynamicGameSystemBPClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTngGameSystem*> DynamicGameSystemAddWaitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTngGameSystem>> DynamicGameSystemReleaseWaitList;
    
public:
    UTngGameInstance();

};

