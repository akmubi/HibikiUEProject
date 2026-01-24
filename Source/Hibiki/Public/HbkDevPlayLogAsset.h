#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkDevPlayLogAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkDevPlayLogAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActorName_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActorName_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActorName_Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActorName_Gimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActorName_Etc;
    
public:
    UHbkDevPlayLogAsset();

};

