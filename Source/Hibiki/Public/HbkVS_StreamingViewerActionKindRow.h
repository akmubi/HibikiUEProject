#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkVS_StreamingViewerActionInfo_t.h"
#include "HbkVS_StreamingViewerMessageInfo_t.h"
#include "Templates/SubclassOf.h"
#include "HbkVS_StreamingViewerActionKindRow.generated.h"

class AActor;
class APawn;

USTRUCT(BlueprintType)
struct FHbkVS_StreamingViewerActionKindRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatHitMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatHitSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatHitGreatSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerMessageInfo_t CoolMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerMessageInfo_t BadMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerActionInfo_t PlayerHealHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnCureItmeBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerActionInfo_t PlayerAttackUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerActionInfo_t PlayerDefenceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerActionInfo_t SpawnEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> SpawnEnemyBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerActionInfo_t SpawnSpEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> SpawnSpEnemyBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerActionInfo_t EnemyAttackUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkVS_StreamingViewerActionInfo_t EnemyDefenceUp;
    
    HIBIKI_API FHbkVS_StreamingViewerActionKindRow();
};

