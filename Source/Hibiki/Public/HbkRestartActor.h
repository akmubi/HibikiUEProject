#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkRestartDataRow.h"
#include "HbkRestartActor.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API AHbkRestartActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RestartDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RemoteEventPrefixName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallRemoteEventToLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRestartDataRow CurRestartDataRow;
    
public:
    AHbkRestartActor(const FObjectInitializer& ObjectInitializer);

};

