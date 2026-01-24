#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkNp0600_RD_FlagManager.generated.h"

class AHbkNp0600_RD_SecretBox;

UCLASS(Blueprintable)
class HIBIKI_API AHbkNp0600_RD_FlagManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkNp0600_RD_SecretBox>> SecretBoxActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SecretBoxActorNames;
    
public:
    AHbkNp0600_RD_FlagManager(const FObjectInitializer& ObjectInitializer);

};

