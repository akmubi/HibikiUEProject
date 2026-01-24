#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkEnemyFireGroupBase.h"
#include "HbkEnemyFireGroup_Em0740Wave.generated.h"

UCLASS(Blueprintable)
class AHbkEnemyFireGroup_Em0740Wave : public AHbkEnemyFireGroupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTotalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivUnitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote DivWaitNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote ActivateWaitNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateWaitNoteCount;
    
public:
    AHbkEnemyFireGroup_Em0740Wave(const FObjectInitializer& ObjectInitializer);

};

