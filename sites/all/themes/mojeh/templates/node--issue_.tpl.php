    <article class="issue-node">  
      
       <header class="node-header">
         <h2 class="node-title"><?php echo strip_tags(render($content['field_issue'])) .' - '. $title; ?></h2>
         <h4 class="byline"><?php print strip_tags(render($content['field_issue_date']), '<span>') ?></h4>
         <hr>
      </header>

      <div class="issue-node-cover">
        <?php print strip_tags(render($content['field_cover_image']), '<img>'); ?>        
      </div>



    </article>